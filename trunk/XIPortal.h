//
//  XIPortal.h
//  Welly
//
//  Created by boost @ 9# on 7/16/08.
//  Copyright 2008 Xi Wang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>
#import "YLView.h"

@class YLSite;

@interface XIPortal : NSView {
    CAScrollLayer *_bodyLayer;
    CATextLayer *_headerTextLayer, *_footerTextLayer;
    CATransform3D _sublayerTransform;
    CGImageRef _shadowImage;

    CGSize _imageSize;
    NSMutableArray *_images;
    int _totalImages, _selectedImageIndex;

    NSMapTable *_layerDictionary;
	
	// test...
	NSView * _mainView;
}

+ (CGColorRef)color:(int)name;
- initWithView:(NSView *)view;
- (BOOL)needsInit;
- (void)loadCovers;
- (void)moveSelection:(int)dx;
- (void)select;
- (YLSite *)selectedSite;
- (void)clickAtPoint:(NSPoint)aPoint count:(NSUInteger)count;

- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;

@end
