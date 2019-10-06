//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SCDeepLinkURL : NSObject
{
    NSArray *_pathComponents;
    _Bool _HTTPLink;
    _Bool _formatValid;
    NSURL *_URL;
    NSString *_sourceApplication;
    NSDictionary *_queryParams;
    NSString *_path;
}

+ (id)deepLinkURLWithLinkId:(id)arg1 clickId:(id)arg2 shareId:(id)arg3;
+ (id)deepLinkURLWithScanDataUUID:(id)arg1;
+ (id)productIdForCommerceURLString:(id)arg1;
+ (id)urlStringForProductId:(id)arg1;
+ (id)urlStringforStoreId:(id)arg1 categoryId:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *clickId;
- (unsigned long long)commerceDeeplinkType;
- (id)description;
@property(readonly, nonatomic) NSString *feature;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2 linkId:(id)arg3;
@property(readonly, nonatomic, getter=isFormatValid) _Bool formatValid; // @synthesize formatValid=_formatValid;
@property(readonly, nonatomic, getter=isHTTPLink) _Bool HTTPLink; // @synthesize HTTPLink=_HTTPLink;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (_Bool)isValidCommerceDeeplink;
@property(readonly, nonatomic) NSString *linkId;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)pathComponentAtIndex:(unsigned long long)arg1;
- (id)pathComponentAtIndex:(unsigned long long)arg1 forceLowerCase:(_Bool)arg2;
@property(readonly, nonatomic) NSString *productId;
- (id)qrCardDescription;
- (id)qrCardTitle;
@property(readonly, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(readonly, nonatomic) NSString *referrer;
@property(readonly, nonatomic) NSString *shareId;
- (_Bool)shouldDismissSearch;
@property(readonly, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(readonly, nonatomic) NSString *storeCategoryId;
@property(readonly, nonatomic) NSString *storeId;

@end
