//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCMediaOwnerProtocol-Protocol.h"

@class NSArray, NSString;

@interface SCChunkInteractionZone : NSObject <NSCoding, SCMediaOwnerProtocol>
{
    NSArray *_items;
}

+ (id)_interactionZoneItems:(id)arg1 chunkDictionary:(id)arg2;
- (void).cxx_destruct;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)imageMediaExistsInCache;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)saveMediaToCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

