//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOJUAdTargeting;

@interface SOJUAdCombinedTargetingBuilder : NSObject
{
    SOJUAdTargeting *_track;
    SOJUAdTargeting *_ad;
}

+ (id)withJUAdCombinedTargeting:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAd:(id)arg1;
- (id)setTrack:(id)arg1;

@end
