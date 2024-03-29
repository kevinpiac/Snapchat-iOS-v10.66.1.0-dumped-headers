//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCommerceSession.h"

@class NSString;

@interface SCCommerceLensCTASession : SCCommerceSession
{
    NSString *_lensId;
    NSString *_lensSessionId;
    long long _lensPosition;
    NSString *_lensCameraType;
    NSString *_lensCameraSourceType;
}

- (void).cxx_destruct;
- (id)initWithOriginType:(long long)arg1 deepLinkURL:(id)arg2 lensId:(id)arg3 lensSessionId:(id)arg4 lensPosition:(long long)arg5 frontCameraActive:(_Bool)arg6 lensSourceType:(long long)arg7;
@property(retain, nonatomic) NSString *lensCameraSourceType; // @synthesize lensCameraSourceType=_lensCameraSourceType;
@property(retain, nonatomic) NSString *lensCameraType; // @synthesize lensCameraType=_lensCameraType;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(nonatomic) long long lensPosition; // @synthesize lensPosition=_lensPosition;
@property(retain, nonatomic) NSString *lensSessionId; // @synthesize lensSessionId=_lensSessionId;
- (void)populateBasePropertiesForEvent:(id)arg1;

@end

