//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensExplorerQueryParametersBuilder : NSObject
{
    NSString *_queryType;
    NSString *_sectionIdentifier;
    NSString *_challengeId;
    NSString *_challengeName;
    unsigned long long _category;
}

+ (id)lensExplorerQueryParameters;
+ (id)lensExplorerQueryParametersFromExistingLensExplorerQueryParameters:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withCategory:(unsigned long long)arg1;
- (id)withChallengeId:(id)arg1;
- (id)withChallengeName:(id)arg1;
- (id)withQueryType:(id)arg1;
- (id)withSectionIdentifier:(id)arg1;

@end
