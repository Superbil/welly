//
//  WLPortal.h
//  Welly
//
//  Created by boost on 9/6/09.
//  Copyright 2009 Xi Wang. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#if MAC_OS_X_VERSION_MAX_ALLOWED > MAC_OS_X_VERSION_10_5
@interface WLPortal : NSObject <NSComboBoxDataSource> {
#else
@interface WLPortal : NSObject {
#endif
    NSMutableArray * _data;
    id _view;
}

@property (readonly) NSView *view;

- (void)show;
- (void)hide;

- (void)keyDown:(NSEvent *)theEvent;
- (void)mouseUp:(NSEvent *)theEvent;

@end