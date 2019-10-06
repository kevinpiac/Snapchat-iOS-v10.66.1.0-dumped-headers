//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCCognacAppDataModel;

@interface SCFriendsFeedCognacContent : NSObject <NSCopying>
{
    NSString *_actionPerformer;
    NSString *_appInstanceId;
    SCCognacAppDataModel *_appDataModel;
    NSArray *_participants;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(readonly, copy, nonatomic) SCCognacAppDataModel *appDataModel; // @synthesize appDataModel=_appDataModel;
@property(readonly, copy, nonatomic) NSString *appInstanceId; // @synthesize appInstanceId=_appInstanceId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithActionPerformer:(id)arg1 appInstanceId:(id)arg2 appDataModel:(id)arg3 participants:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;

@end
