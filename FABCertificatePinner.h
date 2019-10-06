//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FABCertificatePinner : NSObject
{
    NSArray *_certificates;
}

+ (struct __SecCertificate *)createCertificationWithData:(const void *)arg1 length:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (short)evaluateTrust:(struct __SecTrust *)arg1 result:(unsigned int *)arg2;
- (_Bool)handleChallenge:(id)arg1 fromURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCertificates:(id)arg1;

@end

