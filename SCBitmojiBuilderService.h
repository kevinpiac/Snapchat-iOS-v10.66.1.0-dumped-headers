//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;
@protocol SCBitmojiAvatarProvider;

@interface SCBitmojiBuilderService : NSObject
{
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)fetchAsset:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAvatarPreview:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getAssetRequestKey:(id)arg1;
- (id)getAvatarRequestKey:(id)arg1;
- (void)getOutfitsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBitmojiAvatarProvider:(id)arg1 sessionRequestManager:(id)arg2;
- (void)saveAvatarWithOutfitId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
