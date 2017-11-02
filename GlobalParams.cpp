#include "GlobalParams.h"

string GlobalParams::verbose_mode;
int GlobalParams::trace_mode;
string GlobalParams::trace_filename;
int GlobalParams::mesh_dim_x;
int GlobalParams::mesh_dim_y;
double GlobalParams::r2r_link_length;
double GlobalParams::r2h_link_length;
int GlobalParams::buffer_depth;
int GlobalParams::flit_size;
int GlobalParams::min_packet_size;
int GlobalParams::max_packet_size;
string GlobalParams::routing_algorithm;
string GlobalParams::routing_table_filename;
string GlobalParams::selection_strategy;
double GlobalParams::packet_injection_rate;
double GlobalParams::probability_of_retransmission;
double GlobalParams::locality;
string GlobalParams::traffic_distribution;
string GlobalParams::traffic_table_filename;
string GlobalParams::config_filename;
string GlobalParams::power_config_filename;
int GlobalParams::clock_period_ps;
int GlobalParams::simulation_time;
int GlobalParams::reset_time;
int GlobalParams::stats_warm_up_time;
int GlobalParams::rnd_generator_seed;
bool GlobalParams::detailed;
double GlobalParams::dyad_threshold;
unsigned int GlobalParams::max_volume_to_be_drained;
vector < pair < int, double >>GlobalParams::hotspots;
bool GlobalParams::show_buffer_stats;
bool GlobalParams::use_winoc;
bool GlobalParams::use_powermanager;
ChannelConfig GlobalParams::default_channel_configuration;
map < int, ChannelConfig > GlobalParams::channel_configuration;
HubConfig GlobalParams::default_hub_configuration;
map < int, HubConfig > GlobalParams::hub_configuration;
map < int, int >GlobalParams::hub_for_tile;
PowerConfig GlobalParams::power_configuration;
/* --- TRAFIC TRACE AND CUSTOM --- */
string GlobalParams::traffic_trace_filename;
int GlobalParams::traffic_trace_flit_headtail_size;
bool *GlobalParams::trace_eof;
int *GlobalParams::trace_transmitted;
bool GlobalParams::stop_simulation;
int GlobalParams::total_headtail;
int GlobalParams::total_payload;
int GlobalParams::total_padding;
int GlobalParams::total_wirelessflits;
int **GlobalParams::finalized;