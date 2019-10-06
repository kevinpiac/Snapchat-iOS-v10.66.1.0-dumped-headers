//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendUnifiedProfileConfiguration, SCSnapchatter;

@interface SCUnifiedProfileOpenFriendProfileActionData : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    SCFriendUnifiedProfileConfiguration *_configuration;
    NSString *_sourcePageType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCFriendUnifiedProfileConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSnapchatter:(id)arg1 configuration:(id)arg2 sourcePageType:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;

@end

