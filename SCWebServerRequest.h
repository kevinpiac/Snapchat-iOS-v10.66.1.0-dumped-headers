//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCWebServerBodyWriter-Protocol.h"

@class NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol SCWebServerBodyWriter;

@interface SCWebServerRequest : NSObject <SCWebServerBodyWriter>
{
    NSString *_method;
    NSURL *_url;
    NSDictionary *_headers;
    NSString *_path;
    NSDictionary *_query;
    NSString *_type;
    _Bool _chunked;
    unsigned long long _length;
    NSDate *_modifiedSince;
    NSString *_noneMatch;
    struct _NSRange _range;
    _Bool _gzipAccepted;
    NSData *_localAddress;
    NSData *_remoteAddress;
    _Bool _opened;
    NSMutableArray *_decoders;
    NSMutableDictionary *_attributes;
    id <SCWebServerBodyWriter> _writer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) _Bool acceptsGzipContentEncoding; // @synthesize acceptsGzipContentEncoding=_gzipAccepted;
- (id)attributeForKey:(id)arg1;
@property(readonly, nonatomic) struct _NSRange byteRange; // @synthesize byteRange=_range;
- (_Bool)close:(id *)arg1;
@property(readonly, nonatomic) unsigned long long contentLength; // @synthesize contentLength=_length;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_type;
@property(readonly, copy) NSString *description;
- (_Bool)hasBody;
- (_Bool)hasByteRange;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSDate *ifModifiedSince; // @synthesize ifModifiedSince=_modifiedSince;
@property(readonly, nonatomic) NSString *ifNoneMatch; // @synthesize ifNoneMatch=_noneMatch;
- (id)initWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;
@property(retain, nonatomic) NSData *localAddressData; // @synthesize localAddressData=_localAddress;
@property(readonly, nonatomic) NSString *localAddressString;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
- (_Bool)open:(id *)arg1;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)performClose:(id *)arg1;
- (_Bool)performOpen:(id *)arg1;
- (_Bool)performWriteData:(id)arg1 error:(id *)arg2;
- (void)prepareForWriting;
@property(readonly, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) NSData *remoteAddressData; // @synthesize remoteAddressData=_remoteAddress;
@property(readonly, nonatomic) NSString *remoteAddressString;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool usesChunkedTransferEncoding; // @synthesize usesChunkedTransferEncoding=_chunked;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

