//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCStickerPackMetadataLoaderSubscriptionToken-Protocol.h"

@class NSString;

@interface SCStickerPackMetadataLoaderSubscriptionToken : NSObject <SCStickerPackMetadataLoaderSubscriptionToken, NSCopying>
{
    NSString *_key;
    NSString *_uuid;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

