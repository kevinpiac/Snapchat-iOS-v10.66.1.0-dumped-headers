//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCUnifiedProfileOptInFriendStoryActionDataModel : NSObject <NSCopying>
{
    NSString *_currentUserId;
    NSString *_optInEntityId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCurrentUserId:(id)arg1 optInEntityId:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *optInEntityId; // @synthesize optInEntityId=_optInEntityId;

@end

