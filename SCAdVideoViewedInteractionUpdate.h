//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapAdsIdentifier;

@interface SCAdVideoViewedInteractionUpdate : NSObject <NSCopying>
{
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    long long _adPanel;
    long long _mediaDurationInMillis;
    long long _viewedDurationInMillis;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(readonly, nonatomic) long long adPanel; // @synthesize adPanel=_adPanel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 adPanel:(long long)arg3 mediaDurationInMillis:(long long)arg4 viewedDurationInMillis:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long mediaDurationInMillis; // @synthesize mediaDurationInMillis=_mediaDurationInMillis;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;
@property(readonly, nonatomic) long long viewedDurationInMillis; // @synthesize viewedDurationInMillis=_viewedDurationInMillis;

@end

