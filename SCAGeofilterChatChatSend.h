//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAChatChatSendBase.h"

@class NSString;

@interface SCAGeofilterChatChatSend : SCAChatChatSendBase
{
    NSString *stickerGeoId;
    NSString *categoryGeo;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCategoryGeo;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getStickerGeoId;
- (void)setCategoryGeo:(id)arg1;
- (void)setStickerGeoId:(id)arg1;

@end
