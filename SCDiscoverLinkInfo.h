//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SCDiscoverLinkInfo : NSObject
{
    _Bool _isAd;
    _Bool _isSponsored;
    _Bool _linkToLongform;
    NSString *_channelName;
    NSString *_publisherId;
    NSDictionary *_chunkDictionary;
    NSString *_dSnapId;
    NSString *_editionId;
    unsigned long long _linkableState;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(readonly, copy, nonatomic) NSDictionary *chunkDictionary; // @synthesize chunkDictionary=_chunkDictionary;
@property(readonly, copy, nonatomic) NSString *dSnapId; // @synthesize dSnapId=_dSnapId;
- (id)dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
- (id)initWithChannelName:(id)arg1 publisherId:(id)arg2 chunkDictionary:(id)arg3 dSnapId:(id)arg4 editionId:(id)arg5 linkableState:(unsigned long long)arg6 isAd:(_Bool)arg7 isSponsored:(_Bool)arg8 linkToLongform:(_Bool)arg9;
@property(readonly, nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, nonatomic) _Bool linkToLongform; // @synthesize linkToLongform=_linkToLongform;
@property(readonly, nonatomic) unsigned long long linkableState; // @synthesize linkableState=_linkableState;
@property(readonly, copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;

@end
