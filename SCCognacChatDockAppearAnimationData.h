//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCognacChatDockPresenceInfo;

@interface SCCognacChatDockAppearAnimationData : NSObject <NSCopying>
{
    _Bool _animateVisibility;
    SCCognacChatDockPresenceInfo *_presenceInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool animateVisibility; // @synthesize animateVisibility=_animateVisibility;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPresenceInfo:(id)arg1 animateVisibility:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCognacChatDockPresenceInfo *presenceInfo; // @synthesize presenceInfo=_presenceInfo;

@end

