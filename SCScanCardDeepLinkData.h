//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDiscoverChannel, UIImage;

@interface SCScanCardDeepLinkData : NSObject
{
    NSString *_title;
    NSString *_buttonTitle;
    NSString *_iconURL;
    UIImage *_icon;
    NSString *_url;
    NSString *_publisherDeepLinkUrl;
    NSString *_publisher;
    NSString *_editionId;
    NSString *_primaryColor;
    SCDiscoverChannel *_discoverChannel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) SCDiscoverChannel *discoverChannel; // @synthesize discoverChannel=_discoverChannel;
@property(copy, nonatomic) NSString *editionId; // @synthesize editionId=_editionId;
- (void)getImage:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (id)initWithTitle:(id)arg1 buttonTitle:(id)arg2 iconURL:(id)arg3 url:(id)arg4;
@property(copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(copy, nonatomic) NSString *publisherDeepLinkUrl; // @synthesize publisherDeepLinkUrl=_publisherDeepLinkUrl;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

