/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBEndpointsFetchReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionCellularFallbackCount : 1; 
        unsigned int endpointsFetchTaskBadReplyCount : 1; 
        unsigned int endpointsFetchTaskCount : 1; 
        unsigned int endpointsFetchTaskFailureCount : 1; 
        unsigned int endpointsFetchTaskSuccessCount : 1; 
    int _connectionCellularFallbackCount;
    int _endpointsFetchTaskBadReplyCount;
    int _endpointsFetchTaskCount;
    int _endpointsFetchTaskFailureCount;
    int _endpointsFetchTaskSuccessCount;
    } _has;
    unsigned long long _timestamp;
}

@property int connectionCellularFallbackCount;
@property int endpointsFetchTaskBadReplyCount;
@property int endpointsFetchTaskCount;
@property int endpointsFetchTaskFailureCount;
@property int endpointsFetchTaskSuccessCount;
@property BOOL hasConnectionCellularFallbackCount;
@property BOOL hasEndpointsFetchTaskBadReplyCount;
@property BOOL hasEndpointsFetchTaskCount;
@property BOOL hasEndpointsFetchTaskFailureCount;
@property BOOL hasEndpointsFetchTaskSuccessCount;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (int)connectionCellularFallbackCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endpointsFetchTaskBadReplyCount;
- (int)endpointsFetchTaskCount;
- (int)endpointsFetchTaskFailureCount;
- (int)endpointsFetchTaskSuccessCount;
- (BOOL)hasConnectionCellularFallbackCount;
- (BOOL)hasEndpointsFetchTaskBadReplyCount;
- (BOOL)hasEndpointsFetchTaskCount;
- (BOOL)hasEndpointsFetchTaskFailureCount;
- (BOOL)hasEndpointsFetchTaskSuccessCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConnectionCellularFallbackCount:(int)arg1;
- (void)setEndpointsFetchTaskBadReplyCount:(int)arg1;
- (void)setEndpointsFetchTaskCount:(int)arg1;
- (void)setEndpointsFetchTaskFailureCount:(int)arg1;
- (void)setEndpointsFetchTaskSuccessCount:(int)arg1;
- (void)setHasConnectionCellularFallbackCount:(BOOL)arg1;
- (void)setHasEndpointsFetchTaskBadReplyCount:(BOOL)arg1;
- (void)setHasEndpointsFetchTaskCount:(BOOL)arg1;
- (void)setHasEndpointsFetchTaskFailureCount:(BOOL)arg1;
- (void)setHasEndpointsFetchTaskSuccessCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end