//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol SCComposerViewOwner <NSObject>

@optional
- (UIView *)composerWillCreateViewForClass:(Class)arg1 nodeId:(NSString *)arg2;
- (void)didAwakeViewFromComposer:(UIView *)arg1;
- (void)didRenderComposerView:(UIView *)arg1;
@end

