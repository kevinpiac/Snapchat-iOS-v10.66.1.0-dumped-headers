//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LSABitmoji3DData : NSObject
{
    NSString *_metadata;
    long long _requestStatus;
    NSDictionary *_friendmojiMetadataMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *friendmojiMetadataMap; // @synthesize friendmojiMetadataMap=_friendmojiMetadataMap;
- (id)initWithMetadata:(id)arg1 requestStatus:(long long)arg2 friendmojiMetadataMap:(id)arg3;
@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;

@end

