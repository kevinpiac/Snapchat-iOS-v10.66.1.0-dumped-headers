//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"

@protocol SCDiscoverFeedInterestSelectionDataCoordinating <SCDataCoordinating, SCEventAnnouncing>
- (void)fetchInterestSubmissionStateWithCompletion:(void (^)(unsigned long long))arg1;
- (void)fetchInterestTopicDataWithCompletion:(void (^)(NSArray *, NSSet *))arg1;

@optional
- (void)fetchInterestTopicDataWithStateDataWithCompletion:(void (^)(NSArray *, NSDictionary *, NSArray *, unsigned long long))arg1;
@end

