//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCCognacWVJBRequestOperation : NSObject
{
    id _param;
    CDUnknownBlockType _responseCallback;
}

- (void).cxx_destruct;
- (void)_callbackWithError:(struct NSDictionary *)arg1 response:(id)arg2;
- (void)callbackForInvalidClientStateWithResponse:(id)arg1;
- (void)callbackForInvalidInputWithResponse:(id)arg1;
- (void)callbackForNetworkFailureWithResponse:(id)arg1;
- (void)callbackForNoNetworkWithResponse:(id)arg1;
- (void)callbackForViewOvertakenWithResponse:(id)arg1;
- (void)callbackWithResponse:(id)arg1;
- (id)initWithParam:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) id param; // @synthesize param=_param;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
- (void)run;
- (void)teardown;

@end
