//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChunkItem.h"

@class NSArray;

@interface SCChunkAdCameraItem : SCChunkItem
{
    NSArray *_lenses;
}

+ (id)_lensItems:(id)arg1;
- (void).cxx_destruct;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(readonly, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
- (void)saveMediaToCache;

@end
