//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesCustomStoryMetadataUpdateRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSArray *_fetchBQGetMobstory_requestedPublicationIds;
    NSString *_fetchBQGetMobstory_requestSource;
}

+ (id)fetchBQGetMobstoryWithRequestedPublicationIds:(id)arg1 requestSource:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchFetchBQGetMobstory:(CDUnknownBlockType)arg1;

@end

