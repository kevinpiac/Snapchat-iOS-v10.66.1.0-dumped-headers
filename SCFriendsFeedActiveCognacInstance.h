//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCFriendsFeedActiveCognacInstance : NSObject <NSCopying>
{
    NSString *_appId;
    NSString *_appInstanceId;
    NSArray *_participants;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appInstanceId; // @synthesize appInstanceId=_appInstanceId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAppId:(id)arg1 appInstanceId:(id)arg2 participants:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;

@end

