//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPassthroughView, UIView;

@protocol SCPassthroughDataSource <NSObject>

@optional
- (UIView *)hitTest:(struct CGPoint)arg1 forPassthroughView:(SCPassthroughView *)arg2;
@end
