//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCContextV2UserMentionabilityExperimentContext : SCExperimentContext
{
    NSString *_mentionStyle;
}

+ (id)experimentName;
- (void).cxx_destruct;
- (id)experimentName;
@property(readonly, copy, nonatomic) NSString *mentionStyle; // @synthesize mentionStyle=_mentionStyle;
- (void)setupParameters;

@end

