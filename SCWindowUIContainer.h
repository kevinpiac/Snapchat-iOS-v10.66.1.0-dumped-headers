//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUIContainer-Protocol.h"

@class UIWindow;

@interface SCWindowUIContainer : NSObject <SCUIContainer>
{
    UIWindow *_window;
}

- (void).cxx_destruct;
- (void)attachUI:(id)arg1;
- (void)detachUI:(CDUnknownBlockType)arg1;
- (id)initWithWindow:(id)arg1;

@end

