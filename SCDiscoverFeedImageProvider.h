//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaImageProvider-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCImageDownloading;

@interface SCDiscoverFeedImageProvider : NSObject <SCOperaImageProvider>
{
    NSMutableDictionary *_loadedImages;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)_imageForKey:(id)arg1;
- (void)_setImage:(id)arg1 forKey:(id)arg2;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithImageDownloader:(id)arg1;
- (id)miniThumbnailDataForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
