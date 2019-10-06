//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaImageProvider-Protocol.h"

@class NSString, SCShazamOperaDataSource, UIImage;
@protocol SCShazamOperaControllerDelegate;

@interface SCShazamOperaImageProvider : NSObject <SCOperaImageProvider>
{
    UIImage *_topSnapImage;
    UIImage *_artistImage;
    NSString *_topSnapURL;
    NSString *_artistName;
    NSString *_songTitle;
    SCShazamOperaDataSource *_khaleesiDataSource;
    id <SCShazamOperaControllerDelegate> _fetchImageDelegate;
}

+ (id)generateTopSnapFromImage:(id)arg1 artistName:(id)arg2 songTitle:(id)arg3;
- (void).cxx_destruct;
- (void)generateTopSnap;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFetchImageDelegate:(id)arg1 dataSource:(id)arg2;
- (id)initWithTopSnapURL:(id)arg1 artistName:(id)arg2 songTitle:(id)arg3 dataSource:(id)arg4;
- (id)miniThumbnailDataForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

