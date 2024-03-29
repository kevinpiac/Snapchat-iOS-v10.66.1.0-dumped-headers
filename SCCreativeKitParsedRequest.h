//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, SCACreativeKitSnapMetadata, SCSnapKitCameraViewState, SCSnapKitCaption, SCStickerState;

@interface SCCreativeKitParsedRequest : NSObject
{
    NSData *_previewContent;
    SCSnapKitCameraViewState *_cameraViewState;
    SCSnapKitCaption *_caption;
    SCStickerState *_stickerState;
    NSString *_attachmentUrl;
    NSString *_appDisplayName;
    SCACreativeKitSnapMetadata *_loggingMetadata;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(retain, nonatomic) SCSnapKitCameraViewState *cameraViewState; // @synthesize cameraViewState=_cameraViewState;
@property(retain, nonatomic) SCSnapKitCaption *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) SCACreativeKitSnapMetadata *loggingMetadata; // @synthesize loggingMetadata=_loggingMetadata;
@property(copy, nonatomic) NSData *previewContent; // @synthesize previewContent=_previewContent;
@property(retain, nonatomic) SCStickerState *stickerState; // @synthesize stickerState=_stickerState;

@end

