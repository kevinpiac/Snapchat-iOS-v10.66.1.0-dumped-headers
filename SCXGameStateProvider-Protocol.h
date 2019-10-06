//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCXGameStateProvider <NSObject>
- (NSString *)activeGameId;
- (_Bool)hasAcquiredGameMarkerWithId:(NSString *)arg1;
- (_Bool)hasFetchedScore;
- (_Bool)isGameOn;
- (unsigned long long)score;
- (_Bool)shouldFetchGameTiles;
@end

