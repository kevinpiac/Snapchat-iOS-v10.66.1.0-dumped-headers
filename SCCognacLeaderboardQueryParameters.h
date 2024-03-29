//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCognacAppDataModel, SCCognacLeaderboard;

@interface SCCognacLeaderboardQueryParameters : NSObject <NSCopying>
{
    NSString *_userId;
    SCCognacAppDataModel *_appDataModel;
    SCCognacLeaderboard *_leaderboard;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCCognacAppDataModel *appDataModel; // @synthesize appDataModel=_appDataModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 appDataModel:(id)arg2 leaderboard:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCognacLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

