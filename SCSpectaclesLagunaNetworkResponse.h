//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesNetworkResponse.h"

@class VLKAmbaResponse;

@interface SCSpectaclesLagunaNetworkResponse : SCSpectaclesNetworkResponse
{
    VLKAmbaResponse *_ambaResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VLKAmbaResponse *ambaResponse; // @synthesize ambaResponse=_ambaResponse;
- (id)initWithAmbaResponse:(id)arg1;
- (id)logData;
- (id)logFileList;
- (id)mediaData;
- (struct _NSRange)mediaDataRange;
- (id)mediaList;
- (id)mediaUUID;
- (id)metadata;
- (long long)responseStatus;
- (unsigned long long)serializedSize;
- (unsigned long long)wifiSharingStatus;

@end
