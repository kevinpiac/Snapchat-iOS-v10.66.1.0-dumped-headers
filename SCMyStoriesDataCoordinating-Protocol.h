//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"

@class NSString;

@protocol SCMyStoriesDataCoordinating <SCDataCoordinating>
- (void)didDeleteSnapForServerId:(NSString *)arg1;
- (void)fetchMyStoriesWithCompletion:(void (^)(_Bool))arg1;
@end

