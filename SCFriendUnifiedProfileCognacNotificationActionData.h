//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFriendUnifiedProfileCognacNotificationActionData : NSObject <NSCopying>
{
    _Bool _isCognacNotificationMuted;
    NSString *_friendDisplayName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *friendDisplayName; // @synthesize friendDisplayName=_friendDisplayName;
- (unsigned long long)hash;
- (id)initWithIsCognacNotificationMuted:(_Bool)arg1 friendDisplayName:(id)arg2;
@property(readonly, nonatomic) _Bool isCognacNotificationMuted; // @synthesize isCognacNotificationMuted=_isCognacNotificationMuted;
- (_Bool)isEqual:(id)arg1;

@end

