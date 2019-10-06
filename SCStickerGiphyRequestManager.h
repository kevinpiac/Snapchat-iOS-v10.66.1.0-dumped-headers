//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCUserSession;
@protocol GiphyRequestToken;

@interface SCStickerGiphyRequestManager : NSObject
{
    _Bool _shouldUseProxy;
    NSString *_giphyAPIKey;
    SCUserSession *_userSession;
    id <GiphyRequestToken> _lastRequestToken;
}

- (void).cxx_destruct;
- (void)_processResponseData:(id)arg1 requestParameters:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelLastRequest;
- (void)cancelRequestWithToken:(id)arg1;
- (id)getGiphyStickersWithLimit:(long long)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getGiphyStickersWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *giphyAPIKey; // @synthesize giphyAPIKey=_giphyAPIKey;
- (id)initWithAPIKey:(id)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) id <GiphyRequestToken> lastRequestToken; // @synthesize lastRequestToken=_lastRequestToken;
- (id)proxyEndpoint;
@property(readonly, nonatomic) _Bool shouldUseProxy; // @synthesize shouldUseProxy=_shouldUseProxy;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end
