//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedSectionRerankingInfo : NSObject <NSCopying>
{
    _Bool _shouldReorderLocally;
    float _meanStoryScore;
    float _storyScoreVariance;
    float _ageDecayWeight;
    NSString *_astVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float ageDecayWeight; // @synthesize ageDecayWeight=_ageDecayWeight;
@property(readonly, copy, nonatomic) NSString *astVersion; // @synthesize astVersion=_astVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAstVersion:(id)arg1 meanStoryScore:(float)arg2 storyScoreVariance:(float)arg3 ageDecayWeight:(float)arg4 shouldReorderLocally:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) float meanStoryScore; // @synthesize meanStoryScore=_meanStoryScore;
@property(readonly, nonatomic) _Bool shouldReorderLocally; // @synthesize shouldReorderLocally=_shouldReorderLocally;
@property(readonly, nonatomic) float storyScoreVariance; // @synthesize storyScoreVariance=_storyScoreVariance;

@end

