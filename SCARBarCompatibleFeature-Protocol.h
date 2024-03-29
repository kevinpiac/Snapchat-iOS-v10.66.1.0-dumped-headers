//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSUUID, SCARBarItem, UIGestureRecognizer;
@protocol SCFeatureARBar;

@protocol SCARBarCompatibleFeature <NSObject>
- (_Bool)activateFromPoint:(struct CGPoint)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 arBar:(id <SCFeatureARBar>)arg3;
@property(readonly, nonatomic) SCARBarItem *arBarItem;
- (void)cancelPrepareForActivationFromARBar:(id <SCFeatureARBar>)arg1;
- (void)deactivateFromARBar:(id <SCFeatureARBar>)arg1;
- (void)hideOriginalUIForDisplayInARBar:(id <SCFeatureARBar>)arg1;
- (void)prepareForActivationFromPoint:(struct CGPoint)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 arBar:(id <SCFeatureARBar>)arg3;
- (void)restoreFromARBar:(id <SCFeatureARBar>)arg1;
@property(readonly, nonatomic) NSUUID *uuid;
@end

