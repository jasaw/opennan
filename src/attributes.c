#include "attributes.h"
#include "log.h"

const char *nan_attribute_type_as_string(uint8_t attribute_type)
{
    switch (attribute_type)
    {
    case MASTER_INDICATION_ATTRIBUTE:
        return "MASTER_INDICATION_ATTRIBUTE";
    case CLUSTER_ATTRIBUTE:
        return "CLUSTER_ATTRIBUTE";
    case SERVICE_ID_LIST_ATTRIBUTE:
        return "SERVICE_ID_LIST_ATTRIBUTE";
    case SERVICE_DESCRIPTOR_ATTRIBUTE:
        return "SERVICE_DESCRIPTOR_ATTRIBUTE";
    case NAN_CONNECTION_CAPABILITY_ATTRIBUTE:
        return "NAN_CONNECTION_CAPABILITY_ATTRIBUTE";
    case WLAN_INFRASTRUCTURE_ATTRIBUTE:
        return "WLAN_INFRASTRUCTURE_ATTRIBUTE";
    case P2P_OPERATION_ATTRIBUTE:
        return "P2P_OPERATION_ATTRIBUTE";
    case IBSS_ATTRIBUTE:
        return "IBSS_ATTRIBUTE";
    case MESH_ATTRIBUTE:
        return "MESH_ATTRIBUTE";
    case FURTHER_NAN_SERVICE_DISCOVERY_ATTRIBUTE:
        return "FURTHER_NAN_SERVICE_DISCOVERY_ATTRIBUTE";
    case FURTHER_AVAILABILITY_MAP_ATTRIBUTE:
        return "FURTHER_AVAILABILITY_MAP_ATTRIBUTE";
    case COUNTRY_CODE_ATTRIBUTE:
        return "COUNTRY_CODE_ATTRIBUTE";
    case RANGING_ATTRIBUTE:
        return "RANGING_ATTRIBUTE";
    case CLUSTER_DISCOVERY_ATTRIBUTE:
        return "CLUSTER_DISCOVERY_ATTRIBUTE";
    case SERVICE_DESCRIPTOR_EXTENSION_ATTRIBUTE:
        return "SERVICE_DESCRIPTOR_EXTENSION_ATTRIBUTE";
    case DEVICE_CAPABILITY_ATTRIBUTE:
        return "DEVICE_CAPABILITY_ATTRIBUTE";
    case NDP_ATTRIBUTE:
        return "NDP_ATTRIBUTE";
    case NMSG_ATTRIBUTE:
        return "NMSG_ATTRIBUTE";
    case NAN_AVAILABILITY_ATTRIBUTE:
        return "NAN_AVAILABILITY_ATTRIBUTE";
    case NDC_ATTRIBUTE:
        return "NDC_ATTRIBUTE";
    case NDL_ATTRIBUTE:
        return "NDL_ATTRIBUTE";
    case NDL_QOS_ATTRIBUTE:
        return "NDL_QOS_ATTRIBUTE";
    case MULTICAST_SCHEDULE_ATTRIBUTE:
        return "MULTICAST_SCHEDULE_ATTRIBUTE";
    case UNALIGNED_SCHEDULE_ATTRIBUTE:
        return "UNALIGNED_SCHEDULE_ATTRIBUTE";
    case PAGING_UNICAST_ATTRIBUTE:
        return "PAGING_UNICAST_ATTRIBUTE";
    case PAGING_MULTICAST_ATTRIBUTE:
        return "PAGING_MULTICAST_ATTRIBUTE";
    case RANGING_INFORMATION_ATTRIBUTE:
        return "RANGING_INFORMATION_ATTRIBUTE";
    case RANGING_SETUP_ATTRIBUTE:
        return "RANGING_SETUP_ATTRIBUTE";
    case FTM_RANGING_REPORT_ATTRIBUTE:
        return "FTM_RANGING_REPORT_ATTRIBUTE";
    case ELEMENT_CONTAINER_ATTRIBUTE:
        return "ELEMENT_CONTAINER_ATTRIBUTE";
    case EXTENDED_WLAN_INFRASTRUCTURE_ATTRIBUTE:
        return "EXTENDED_WLAN_INFRASTRUCTURE_ATTRIBUTE";
    case EXTENDED_P2P_OPERATION_ATTRIBUTE:
        return "EXTENDED_P2P_OPERATION_ATTRIBUTE";
    case EXTENDED_IBSS_ATTRIBUTE:
        return "EXTENDED_IBSS_ATTRIBUTE";
    case EXTENDED_MESH_ATTRIBUTE:
        return "EXTENDED_MESH_ATTRIBUTE";
    case CIPHER_SUITE_INFO_ATTRIBUTE:
        return "CIPHER_SUITE_INFO_ATTRIBUTE";
    case SECURITY_CONTEXT_INFO_ATTRIBUTE:
        return "SECURITY_CONTEXT_INFO_ATTRIBUTE";
    case SHARED_KEY_DESCRIPTOR_ATTRIBUTE:
        return "SHARED_KEY_DESCRIPTOR_ATTRIBUTE";
    case MULTICAST_SCHEDULE_CHANGE_ATTRIBUTE:
        return "MULTICAST_SCHEDULE_CHANGE_ATTRIBUTE";
    case MULTICAST_SCHEDULE_OWNER_CHANGE_ATTRIBUTE:
        return "MULTICAST_SCHEDULE_OWNER_CHANGE_ATTRIBUTE";
    case PUBLIC_AVAILABILITY_ATTRIBUTE:
        return "PUBLIC_AVAILABILITY_ATTRIBUTE";
    case SUBSCRIBE_SERVICE_ID_LIST_ATTRIBUTE:
        return "SUBSCRIBE_SERVICE_ID_LIST_ATTRIBUTE";
    case NDP_EXTENSION_ATTRIBUTE:
        return "NDP_EXTENSION_ATTRIBUTE";
    case VENDOR_SPECIFIC_ATTRIBUTE:
        return "VENDOR_SPECIFIC_ATTRIBUTE";
    default:
        return "UNKNOWN_ATTRIBUTE";
    }
}
