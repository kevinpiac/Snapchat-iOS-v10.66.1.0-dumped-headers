//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCPublisherData, SCUserData;

@interface SCCreatorData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCUserData *_userData_userData;
    SCPublisherData *_publisherData_publisherData;
}

+ (id)publisherDataWithPublisherData:(id)arg1;
+ (id)userDataWithUserData:(id)arg1;
- (void).cxx_destruct;
- (id)asPublisherData;
- (id)asUserData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameSubtype:(id)arg1;
- (void)matchUserData:(CDUnknownBlockType)arg1 publisherData:(CDUnknownBlockType)arg2;
- (unsigned long long)subtype;

@end

