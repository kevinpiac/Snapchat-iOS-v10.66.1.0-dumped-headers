//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCACreativeKitSnapMetadata;

@interface SCCameraDeepLinkMetadata : NSObject
{
    NSString *_caption;
    NSString *_attachmentUrl;
    NSArray *_stickers;
    NSString *_appDisplayName;
    SCACreativeKitSnapMetadata *_loggingMetadata;
    unsigned long long _cameraPosition;
    NSString *_publisherId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, nonatomic) unsigned long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttachmentUrl:(id)arg1 caption:(id)arg2 stickers:(id)arg3 appDisplayName:(id)arg4 loggingMetadata:(id)arg5 cameraPosition:(unsigned long long)arg6;
- (id)initWithAttachmentUrl:(id)arg1 caption:(id)arg2 stickers:(id)arg3 appDisplayName:(id)arg4 loggingMetadata:(id)arg5 cameraPosition:(unsigned long long)arg6 publisherId:(id)arg7;
@property(readonly, copy, nonatomic) SCACreativeKitSnapMetadata *loggingMetadata; // @synthesize loggingMetadata=_loggingMetadata;
@property(readonly, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;

@end

