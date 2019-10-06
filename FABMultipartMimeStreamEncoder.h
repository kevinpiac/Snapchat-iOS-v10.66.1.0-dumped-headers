//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSData, NSOutputStream, NSString;

@interface FABMultipartMimeStreamEncoder : NSObject <NSStreamDelegate>
{
    unsigned long long _length;
    NSString *_boundary;
    NSOutputStream *_outputStream;
}

+ (id)contentTypeHTTPHeaderValueWithBoundary:(id)arg1;
+ (id)encoderWithStream:(id)arg1 andBoundary:(id)arg2;
+ (id)generateBoundary;
+ (void)populateRequest:(id)arg1 withDataFromEncoder:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)addFile:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 fieldName:(id)arg4;
- (void)addFileData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 fieldName:(id)arg4;
- (void)addValue:(id)arg1 fieldName:(id)arg2;
- (void)beginEncoding;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(readonly, copy, nonatomic) NSString *contentLengthHTTPHeaderValue;
@property(readonly, copy, nonatomic) NSString *contentTypeHTTPHeaderValue;
- (void)encode:(CDUnknownBlockType)arg1;
- (void)endEncoding;
@property(readonly, copy, nonatomic) NSData *footerData;
@property(readonly, copy, nonatomic) NSData *headerData;
- (id)initWithStream:(id)arg1 andBoundary:(id)arg2;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (_Bool)writeBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)writeData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

