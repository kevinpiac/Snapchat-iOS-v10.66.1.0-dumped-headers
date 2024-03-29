//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapAdsIdentifier;

@interface SCAdAudioChangedInteractionUpdate : NSObject <NSCopying>
{
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    double _audioOutputVolume;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(readonly, nonatomic) double audioOutputVolume; // @synthesize audioOutputVolume=_audioOutputVolume;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 audioOutputVolume:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;

@end

