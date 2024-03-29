//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCWebServerBodyReader-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol SCWebServerBodyReader;

@interface SCWebServerResponse : NSObject <SCWebServerBodyReader>
{
    NSString *_type;
    unsigned long long _length;
    long long _status;
    unsigned long long _maxAge;
    NSDate *_lastModified;
    NSString *_eTag;
    NSMutableDictionary *_headers;
    _Bool _chunked;
    _Bool _gzipped;
    _Bool _opened;
    NSMutableArray *_encoders;
    id <SCWebServerBodyReader> _reader;
}

+ (id)response;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_headers;
@property(nonatomic) unsigned long long cacheControlMaxAge; // @synthesize cacheControlMaxAge=_maxAge;
- (void)close;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_length;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_type;
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
- (_Bool)hasBody;
- (id)init;
- (id)initWithRedirect:(id)arg1;
@property(nonatomic, getter=isGZipContentEncodingEnabled) _Bool gzipContentEncodingEnabled; // @synthesize gzipContentEncodingEnabled=_gzipped;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModified;
- (_Bool)open:(id *)arg1;
- (void)performClose;
- (_Bool)performOpen:(id *)arg1;
- (void)performReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForReading;
- (id)readData:(id *)arg1;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_status;
- (void)setValue:(id)arg1 forAdditionalHeader:(id)arg2;
@property(readonly, nonatomic) _Bool usesChunkedTransferEncoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

