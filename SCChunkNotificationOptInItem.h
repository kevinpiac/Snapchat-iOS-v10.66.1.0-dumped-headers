//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChunkItem.h"

@class NSMutableDictionary, NSString;

@interface SCChunkNotificationOptInItem : SCChunkItem
{
    NSMutableDictionary *_attachmentProperties;
    NSString *_namespace;
}

- (void).cxx_destruct;
- (id)_baseProperties;
- (id)attachmentProperties;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(readonly, copy, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
- (void)saveMediaToCache;

@end

