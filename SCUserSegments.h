//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SCUserSegments : NSObject
{
    NSSet *_segmentSet;
}

- (void).cxx_destruct;
- (_Bool)_isInUserSegment:(long long)arg1;
- (id)initWithUserSegments:(id)arg1;
- (_Bool)isNewOrHighRiskUser;
- (_Bool)isNewUser;
- (_Bool)isRatingPromptTargetUser;

@end

