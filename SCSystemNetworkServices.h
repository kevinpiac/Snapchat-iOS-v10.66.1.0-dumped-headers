//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCSystemNetworkServices : NSObject
{
    SCLazy *_httpMetadataService;
    SCLazy *_httpRequestModifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *httpMetadataService; // @synthesize httpMetadataService=_httpMetadataService;
@property(readonly, nonatomic) SCLazy *httpRequestModifier; // @synthesize httpRequestModifier=_httpRequestModifier;
- (id)initWithHTTPMetadataService:(id)arg1 httpRequestModifier:(id)arg2;

@end

