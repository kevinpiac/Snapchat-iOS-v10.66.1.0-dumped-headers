//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaRemoteVideoCatalogProperties-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SCDiscoverVideoCatalog : NSObject <SCOperaRemoteVideoCatalogProperties>
{
    NSArray *_videoURLs;
    NSString *_name;
    NSString *_accountID;
    NSString *_videoID;
    NSString *_playlist;
    NSDictionary *_videoURLToCaption;
    NSDictionary *_videoURLToCaptionPresent;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (id)initWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *playlist; // @synthesize playlist=_playlist;
- (id)propertiesForCatalog;
@property(readonly, copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, copy, nonatomic) NSDictionary *videoURLToCaption; // @synthesize videoURLToCaption=_videoURLToCaption;
@property(readonly, copy, nonatomic) NSDictionary *videoURLToCaptionPresent; // @synthesize videoURLToCaptionPresent=_videoURLToCaptionPresent;
@property(readonly, copy, nonatomic) NSArray *videoURLs; // @synthesize videoURLs=_videoURLs;

@end

