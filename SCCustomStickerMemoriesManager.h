//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCCache, SCUserSession;
@protocol SCPerforming;

@interface SCCustomStickerMemoriesManager : NSObject
{
    SCUserSession *_userSession;
    NSMutableDictionary *_memoriesStickers;
    SCCache *_cache;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (id)_decryptImageData:(id)arg1 sticker:(id)arg2;
- (void)_fetchStickerImageFromServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processServerResponseWithStickerId:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;
- (void)saveStickerDataToCache:(id)arg1 data:(id)arg2;
- (void)tryGetStickerImage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

