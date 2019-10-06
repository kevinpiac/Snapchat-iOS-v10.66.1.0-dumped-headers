//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCStickerPackMetadataDownloadStrategy.h"

@interface SCStickerPackGCSDownloadStrategy : SCStickerPackMetadataDownloadStrategy
{
    SCStickerPackMetadataDownloadStrategy *_fallbackStrategy;
}

- (void).cxx_destruct;
- (void)_downloadDataForStickerPack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logMissingMetadataURLAndUseFallbackStrategyForPack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadDataForStickerPack:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SCStickerPackMetadataDownloadStrategy *fallbackStrategy; // @synthesize fallbackStrategy=_fallbackStrategy;
- (id)initWithFilesDownloader:(id)arg1 fallbackStrategy:(id)arg2;

@end

